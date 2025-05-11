#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x8e0
        // Has VTable
        // Construct allowed
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
        class C_Sprite : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // m_hSpriteMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSpriteMaterial;
            char m_hSpriteMaterial[0x8]; // 0x7d0            
            // metadata: MNetworkEnable
            // m_hAttachedToEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAttachedToEntity;
            char m_hAttachedToEntity[0x4]; // 0x7d8            
            // metadata: MNetworkEnable
            source2sdk::modellib::AttachmentHandle_t m_nAttachment; // 0x7dc            
            uint8_t _pad07dd[0x3]; // 0x7dd
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "60,000000"
            // metadata: MNetworkEncodeFlags "2"
            float m_flSpriteFramerate; // 0x7e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "20"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "256,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_flFrame; // 0x7e4            
            source2sdk::entity2::GameTime_t m_flDieTime; // 0x7e8            
            uint8_t _pad07ec[0xc]; // 0x7ec
            // metadata: MNetworkEnable
            std::uint32_t m_nBrightness; // 0x7f8            
            // metadata: MNetworkEnable
            float m_flBrightnessDuration; // 0x7fc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSpriteScaleChanged"
            float m_flSpriteScale; // 0x800            
            // metadata: MNetworkEnable
            float m_flScaleDuration; // 0x804            
            // metadata: MNetworkEnable
            bool m_bWorldSpaceScale; // 0x808            
            uint8_t _pad0809[0x3]; // 0x809
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "6"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "64,000000"
            // metadata: MNetworkEncodeFlags "2"
            float m_flGlowProxySize; // 0x80c            
            // metadata: MNetworkEnable
            float m_flHDRColorScale; // 0x810            
            source2sdk::entity2::GameTime_t m_flLastTime; // 0x814            
            float m_flMaxFrame; // 0x818            
            float m_flStartScale; // 0x81c            
            float m_flDestScale; // 0x820            
            source2sdk::entity2::GameTime_t m_flScaleTimeStart; // 0x824            
            std::int32_t m_nStartBrightness; // 0x828            
            std::int32_t m_nDestBrightness; // 0x82c            
            source2sdk::entity2::GameTime_t m_flBrightnessTimeStart; // 0x830            
            uint8_t _pad0834[0x4]; // 0x834
            // m_hOldSpriteMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hOldSpriteMaterial;
            char m_hOldSpriteMaterial[0x8]; // 0x838            
            uint8_t _pad0840[0x98]; // 0x840
            std::int32_t m_nSpriteWidth; // 0x8d8            
            std::int32_t m_nSpriteHeight; // 0x8dc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Sprite because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Sprite) == 0x8e0);
    };
};
