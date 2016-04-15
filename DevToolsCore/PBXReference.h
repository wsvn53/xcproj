
@protocol PBXGroup;

@protocol PBXReference <NSObject>

- (NSString *) name;
- (NSString *) sourceTree;

- (void)setName:(NSString *)name;
- (void)setPath:(NSString *)arg1 andSourceTree:(NSString *)arg2;

@end
