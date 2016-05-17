#import "PBXTarget.h"
#import "XCConfigurationList.h"

@protocol PBXProject <PBXContainer, NSObject>

+ (BOOL) isProjectWrapperExtension:(NSString *)extension;
+ (id<PBXProject>) projectWithFile:(NSString *)projectAbsolutePath;

- (NSArray<PBXTarget> *) targets;
- (id<PBXTarget>) targetNamed:(NSString *)targetName;

- (NSString *) name;

- (id<XCConfigurationList>) buildConfigurationList;

- (NSString *) expandedValueForString:(NSString *)string forBuildParameters:(id<IDEBuildParameters>)buildParameters;

- (BOOL) writeToFileSystemProjectFile:(BOOL)projectWrite userFile:(BOOL)userWrite checkNeedsRevert:(BOOL)checkNeedsRevert;

- (void)removeReference:(id<PBXFileReference>)arg1;

@end
