#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x7f8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "HMaterialStrong m_hSpriteMaterial"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hAttachedToEntity"
    // static metadata: MNetworkVarNames "AttachmentHandle_t m_nAttachment"
    // static metadata: MNetworkVarNames "float32 m_flSpriteFramerate"
    // static metadata: MNetworkVarNames "float32 m_flFrame"
    // static metadata: MNetworkVarNames "uint32 m_nBrightness"
    // static metadata: MNetworkVarNames "float32 m_flBrightnessDuration"
    // static metadata: MNetworkVarNames "float32 m_flSpriteScale"
    // static metadata: MNetworkVarNames "float32 m_flScaleDuration"
    // static metadata: MNetworkVarNames "bool m_bWorldSpaceScale"
    // static metadata: MNetworkVarNames "float32 m_flGlowProxySize"
    // static metadata: MNetworkVarNames "float32 m_flHDRColorScale"
    #pragma pack(push, 1)
    class CSprite : public server::CBaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        // m_hSpriteMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hSpriteMaterial;
        char m_hSpriteMaterial[0x8]; // 0x788        
        // metadata: MNetworkEnable
        // m_hAttachedToEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAttachedToEntity;
        char m_hAttachedToEntity[0x4]; // 0x790        
        // metadata: MNetworkEnable
        modellib::AttachmentHandle_t m_nAttachment; // 0x794        
        [[maybe_unused]] std::uint8_t pad_0x795[0x3]; // 0x795
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "60,000000"
        // metadata: MNetworkEncodeFlags "2"
        float m_flSpriteFramerate; // 0x798        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "20"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "256,000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_flFrame; // 0x79c        
        entity2::GameTime_t m_flDieTime; // 0x7a0        
        [[maybe_unused]] std::uint8_t pad_0x7a4[0xc]; // 0x7a4
        // metadata: MNetworkEnable
        uint32_t m_nBrightness; // 0x7b0        
        // metadata: MNetworkEnable
        float m_flBrightnessDuration; // 0x7b4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSpriteScaleChanged"
        float m_flSpriteScale; // 0x7b8        
        // metadata: MNetworkEnable
        float m_flScaleDuration; // 0x7bc        
        // metadata: MNetworkEnable
        bool m_bWorldSpaceScale; // 0x7c0        
        [[maybe_unused]] std::uint8_t pad_0x7c1[0x3]; // 0x7c1
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "6"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "64,000000"
        // metadata: MNetworkEncodeFlags "2"
        float m_flGlowProxySize; // 0x7c4        
        // metadata: MNetworkEnable
        float m_flHDRColorScale; // 0x7c8        
        entity2::GameTime_t m_flLastTime; // 0x7cc        
        float m_flMaxFrame; // 0x7d0        
        float m_flStartScale; // 0x7d4        
        float m_flDestScale; // 0x7d8        
        entity2::GameTime_t m_flScaleTimeStart; // 0x7dc        
        int32_t m_nStartBrightness; // 0x7e0        
        int32_t m_nDestBrightness; // 0x7e4        
        entity2::GameTime_t m_flBrightnessTimeStart; // 0x7e8        
        int32_t m_nSpriteWidth; // 0x7ec        
        int32_t m_nSpriteHeight; // 0x7f0        
        [[maybe_unused]] std::uint8_t pad_0x7f4[0x4];
        
        // Datamap fields:
        // void CSpriteAnimateThink; // 0x0
        // void CSpriteExpandThink; // 0x0
        // void CSpriteAnimateUntilDead; // 0x0
        // void CSpriteBeginFadeOutThink; // 0x0
        // void InputHideSprite; // 0x0
        // void InputShowSprite; // 0x0
        // void InputToggleSprite; // 0x0
        // float InputColorRedValue; // 0x0
        // float InputColorGreenValue; // 0x0
        // float InputColorBlueValue; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSprite because it is not a standard-layout class
    static_assert(sizeof(CSprite) == 0x7f8);
};
