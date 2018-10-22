//
//  LabelSubclasses.swift
//  KotliniOS
//
//  Created by Ellen Shapiro on 10/18/18.
//  Copyright © 2018 Bakken & Baeck. All rights reserved.
//

import UIKit
import SharedCode

@IBDesignable
class CustomLabel: UILabel {
    
    var style: StaticTextStyle! {
        didSet {
            configure(for: style)
        }
    }
    
    // MARK: - Initialization
    
    func commonInit() {
        // Execute code which should always
    }
    
    init() {
        super.init(frame: .zero)
        self.commonInit()
    }
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        self.commonInit()
    }
    
    required init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
        self.commonInit()
    }
    
    override func prepareForInterfaceBuilder() {
        super.prepareForInterfaceBuilder()
        self.commonInit()
    }
    
    // MARK: - Styling
    
    func configure(for style: StaticTextStyle) {
        self.font = style.font.toUIFont(size_: style.fontSize)
        self.textColor = style.textColor.toUIColor()
    }
}

class HeadlineLabel: CustomLabel {
    
    override func commonInit() {
        super.commonInit()
        self.style = StaticTextStyle.Headline()
    }
}

class HeadlineSecondaryLabel: CustomLabel {
    
    override func commonInit() {
        super.commonInit()
        self.style = StaticTextStyle.HeadlineSecondary()
    }
}

class TextPrimaryLabel: CustomLabel {
    
    override func commonInit() {
        super.commonInit()
        self.style = StaticTextStyle.TextPrimary()
    }
}

class TextSecondaryLabel: CustomLabel {
    
    override func commonInit() {
        super.commonInit()
        self.style = StaticTextStyle.TextSecondary()
    }
}

class TextCaptionLabel: CustomLabel {
    
    override func commonInit() {
        super.commonInit()
        self.style = StaticTextStyle.TextCaption()
    }
}

class TextIconLabel: CustomLabel {
    
    override func commonInit() {
        super.commonInit()
        self.style = StaticTextStyle.TextIconLabel()
    }
}
