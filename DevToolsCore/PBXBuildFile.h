@protocol NSString;
@protocol PBXFileReference;

@protocol PBXBuildFile <NSObject>

+ (id<PBXBuildFile>)buildFileWithReference:(id<PBXFileReference>)arg1;

- (NSString *) absolutePath;

- (NSArray *) attributes;

- (id<PBXFileReference>)fileReference;
- (id<PBXBuildFile>)initWithReference:(id)arg1;

@end
