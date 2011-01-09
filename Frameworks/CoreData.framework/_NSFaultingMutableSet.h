/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObject;



@interface _NSFaultingMutableSet : NSMutableSet 
{
    NSInteger _cd_rc;
    struct _NSFaultingMutableSetFlags { 
        unsigned int _isFault : 1; 
        unsigned int _mustPropagateDelete : 1; 
        unsigned int _reserved : 14; 
        unsigned int _relationship : 16; 
    } _flags;
    id _realSet;
    NSManagedObject *_source;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(BOOL)arg3;
- (id)initWithSource:(id)arg1 destinations:(id)arg2 forRelationship:(id)arg3 inContext:(id)arg4;
- (id)retain;
- (void)release;
- (NSUInteger)retainCount;
- (void)dealloc;
- (BOOL)isFault;
- (void)willRead;
- (void)turnIntoFault;
- (id)source;
- (id)relationship;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (NSUInteger)count;
- (id)member:(id)arg1;
- (void)addObject:(id)arg1;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (id)objectEnumerator;
- (void)getObjects:(id*)arg1;
- (id)allObjects;
- (id)anyObject;
- (BOOL)containsObject:(id)arg1;
- (BOOL)intersectsSet:(id)arg1;
- (BOOL)isEqualToSet:(id)arg1;
- (BOOL)isSubsetOfSet:(id)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)removeObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)removeAllObjects;
- (void)unionSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (Class)classForCoder;
- (id)replacementObjectForCoder:(id)arg1;
- (Class)classForArchiver;

@end