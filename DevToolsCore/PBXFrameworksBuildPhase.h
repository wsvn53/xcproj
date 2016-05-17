#import "PBXBuildPhase.h"
#import "PBXFileReference.h"

@protocol PBXFrameworksBuildPhase <PBXBuildPhase>
+ (NSString *)defaultName;
- (BOOL)insertBuildFiles:(NSArray *)arg1 atIndex:(unsigned long long)arg2;
@end
