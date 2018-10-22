//
//  ButtonSubclasses.swift
//  KotliniOS
//
//  Created by Ellen Shapiro on 10/18/18.
//  Copyright © 2018 Bakken & Baeck. All rights reserved.
//

import UIKit
import SharedCode

@IBDesignable
class CustomButton: UIButton {
    
    var style: ButtonStyle! {
        didSet {
            configure(for: style)
        }
    }
    
    override var intrinsicContentSize: CGSize {
        return CGSize(width: UIView.noIntrinsicMetric, height: self.style.defaultHeight.toCGFloat)
    }
    
    var defaultBackgroundColor: UIColor {
        return self.style.backgroundColorInactive.toUIColor()
    }
    
    var activeBackgroundColor: UIColor {
        return self.style.backgroundColorActive.toUIColor()
    }
    
    var disabledBackgroundColor: UIColor {
        return self.style.backgroundColorDisabled.toUIColor()
    }
    
    func commonInit() {
        // Setup all the things
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
    
    func configure(for style: ButtonStyle) {
        self.titleLabel?.font = style.font.toUIFont(size_: style.fontSize)
        
        let defaultTextColor = style.textColorInactive.toUIColor()
        let activeTextColor = style.textColorActive.toUIColor()
        let disabledTextColor = style.textColorDisabled.toUIColor()
        
        self.setTitleColor(defaultTextColor, for: .normal)
        self.setTitleColor(activeTextColor, for: .highlighted)
        self.setTitleColor(activeTextColor, for: .selected)
        self.setTitleColor(disabledTextColor, for: .disabled)
        
        switch style.cornerRadius {
        case is CornerRadius.None:
            // No-op - nothing to change here.
            break
        default:
            self.layer.cornerRadius = style.cornerRadius.value.toCGFloat
            self.clipsToBounds = true
        }
        
        guard self.buttonType == .custom else {
            return
        }
        
        self.setBackgroundImage(UIImage.from(color: defaultBackgroundColor), for: .normal)
        self.setBackgroundImage(UIImage.from(color: activeBackgroundColor), for: .highlighted)
        self.setBackgroundImage(UIImage.from(color: disabledBackgroundColor), for: .disabled)
        self.adjustsImageWhenHighlighted = false
        
        
    }
}

class CallToActionButton: CustomButton {
    
    override func commonInit() {
        self.style = ButtonStyle.CallToAction()
        super.commonInit()
    }
}

class DestructiveButton: CustomButton {
    
    override func commonInit() {
        self.style = ButtonStyle.Destructive()
        super.commonInit()
    }
}
