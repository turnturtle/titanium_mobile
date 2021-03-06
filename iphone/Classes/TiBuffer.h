/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2011 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#import <Foundation/Foundation.h>
#import "TiProxy.h"
#import "TiBlob.h"

// TODO: Support array-style access of bytes
/**
 The class represents a buffer of bytes.
 */
@interface TiBuffer : TiProxy {
    NSMutableData* data;
    NSNumber* byteOrder;
}
/**
 Provides access to raw data.
 */
@property(nonatomic, retain) NSMutableData* data;

// Public API
-(NSNumber*)append:(id)args;
-(NSNumber*)insert:(id)args;
-(NSNumber*)copy:(id)args NS_RETURNS_NOT_RETAINED;
-(TiBuffer*)clone:(id)args;
-(void)fill:(id)args;

-(void)clear:(id)_void;
-(void)release:(id)_void;

-(TiBlob*)toBlob:(id)_void;
-(NSString*)toString:(id)_void;

/**
 Provides access to the buffer length.
 */
@property(nonatomic,assign) NSNumber* length;

/**
 Provides access to the data byte order.
 
 The byte order values are: 1 - little-endian, 2 - big-endian.
 */
@property(nonatomic,retain) NSNumber* byteOrder;

// SPECIAL NOTES:
// Ti.Buffer objects have an 'overloaded' Ti.Buffer[x] operation for x==int (making them behave like arrays).
// See the code for how this works.

@end
