#import "PBXFileReference.h"

@protocol PBXBuildPhase <NSObject>

+ (id<PBXBuildPhase>) buildPhase;

- (NSString *)name;

- (NSArray<PBXBuildFile> *) buildFiles;

- (BOOL) addReference:(id<PBXFileReference>)reference;
- (BOOL)addBuildFile:(id<PBXBuildFile>)arg1;
- (void)removeBuildFile:(id)arg1;
- (BOOL) containsFileReferenceIdenticalTo:(id<PBXFileReference>)reference;

@end
