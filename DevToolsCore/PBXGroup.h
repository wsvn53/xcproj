#import "PBXReference.h"

@protocol PBXGroup <PBXReference, NSObject>

+ (id<PBXGroup>) groupWithName:(NSString *)aName;

- (NSArray<PBXReference> *) children;

- (BOOL) containsItem:(id<PBXReference>)item;

- (void) addItem:(id<PBXReference>)item;
- (void) insertItem:(id<PBXReference>)item atIndex:(NSUInteger)index;

// The 'files' parameter must be an array of absolute paths (NSString)
- (NSArray<PBXFileReference> *) addFiles:(NSArray *)files copy:(BOOL)copy createGroupsRecursively:(BOOL)createGroupsRecursively;

- (unsigned long long)itemCount;
- (id)itemNamed:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfItem:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)removeItemsAtIndexes:(id)arg1;
- (BOOL)deleteFromProject;
- (id)addItems:(id)arg1 copy:(BOOL)arg2 createGroupsRecursively:(BOOL)arg3;
- (id)addItems:(id)arg1 atIndex:(long long)arg2 copy:(BOOL)arg3 createGroupsRecursively:(BOOL)arg4;
- (id)insertItems:(id)arg1 atIndex:(long long)arg2 copy:(BOOL)arg3 createGroupsRecursively:(BOOL)arg4;
- (id)addFiles:(id)arg1 atIndex:(long long)arg2 copy:(BOOL)arg3 createGroupsRecursively:(BOOL)arg4;
- (id)insertFiles:(id)arg1 atIndex:(long long)arg2 copy:(BOOL)arg3 createGroupsRecursively:(BOOL)arg4;
- (void)addItems:(id)arg1;

@end
