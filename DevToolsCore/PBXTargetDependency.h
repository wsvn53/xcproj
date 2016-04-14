//
//  PBXTargetDependency.h
//  xcproj
//
//  Created by Ethan on 16/4/14.
//  Copyright © 2016 Ethan. All rights reserved.
//

@protocol PBXTargetDependency <NSObject>

+ (id)archivableWeakRelationshipsForPListArchiver:(id)arg1;
+ (id)archivableRelationships;
+ (id)archivableAttributes;
+ (id)dependencyWithProjectReference:(id)arg1 targetGlobalID:(id)arg2;
+ (id)dependencyWithProjectReference:(id)arg1 targetName:(id)arg2;
+ (id)dependencyWithTarget:(id)arg1;
- (long long)compareName:(id)arg1;
- (void)_setTargetProxy:(id)arg1;
- (void)_setTarget:(id)arg1;
- (id)_target;
- (void)writeToPListArchiver:(id)arg1;
- (void)_syncCachedValuesWithRemoteTargetIfNeeded;
- (BOOL)needsSync;
- (void)setNeedsSync:(BOOL)arg1;
- (id)orderedRecursiveDependencies;
- (void)setContainer:(id)arg1;
- (id)container;
- (void)setOwner:(id)arg1;
- (id)owner;
- (id)name;
- (void)setTarget:(id)arg1;
- (id)target;
- (id)targetProxy;
- (void)dealloc;
- (id)initWithProjectReference:(id)arg1 targetName:(id)arg2;
- (id)initWithProjectReference:(id)arg1 targetGlobalID:(id)arg2;
- (id)initWithTarget:(id)arg1;
- (id)init;

@end
