@class Package;
@interface PackageCellContentView : UIView

@property (nonatomic, retain) UIImageView *icon;
@property (nonatomic, retain) UIImageView *badge;

@property (nonatomic, retain) UILabel *name;
@property (nonatomic, retain) UILabel *source;
@property (nonatomic, retain) UILabel *c_badge;
@property (nonatomic, retain) UILabel *i_badge;
@property (nonatomic, retain) UILabel *overview;
@property (nonatomic, assign) BOOL summarized;

- (instancetype)initWithPackage:(Package *)package;
- (void)refreshWithPackage:(Package *)package asSummary:(BOOL)summarized;

@end