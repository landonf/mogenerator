// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to ParentMO.h instead.

#import <CoreData/CoreData.h>
#import "HumanMO.h"

@class ChildMO;

@interface ParentMOID : NSManagedObjectID {}
@end

@interface _ParentMO : HumanMO {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (ParentMOID*)objectID;



@property (nonatomic, retain) NSNumber *myInt16Transient;

- (short)myInt16TransientValue;
- (void)setMyInt16TransientValue:(short)value_;

//- (BOOL)validateMyInt16Transient:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSString *parentName;

//- (BOOL)validateParentName:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSObject *myTransformableSansClassName;

//- (BOOL)validateMyTransformableSansClassName:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSDecimalNumber *myDecimal;

//- (BOOL)validateMyDecimal:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSDate *myDate;

//- (BOOL)validateMyDate:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSColor *myTransformableWithClassName;

//- (BOOL)validateMyTransformableWithClassName:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSNumber *myBoolean;

- (BOOL)myBooleanValue;
- (void)setMyBooleanValue:(BOOL)value_;

//- (BOOL)validateMyBoolean:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSNumber *myInt64;

- (long long)myInt64Value;
- (void)setMyInt64Value:(long long)value_;

//- (BOOL)validateMyInt64:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSNumber *myDouble;

- (double)myDoubleValue;
- (void)setMyDoubleValue:(double)value_;

//- (BOOL)validateMyDouble:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSNumber *myInt16;

- (short)myInt16Value;
- (void)setMyInt16Value:(short)value_;

//- (BOOL)validateMyInt16:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSNumber *myFloat;

- (float)myFloatValue;
- (void)setMyFloatValue:(float)value_;

//- (BOOL)validateMyFloat:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSData *myBinaryData;

//- (BOOL)validateMyBinaryData:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSString *myString;

//- (BOOL)validateMyString:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSNumber *myInt32;

- (int)myInt32Value;
- (void)setMyInt32Value:(int)value_;

//- (BOOL)validateMyInt32:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSSet* children;

- (void)addChildren:(NSSet*)value_;
- (void)removeChildren:(NSSet*)value_;
- (void)addChildrenObject:(ChildMO*)value_;
- (void)removeChildrenObject:(ChildMO*)value_;
- (NSMutableSet*)childrenSet;



@end
