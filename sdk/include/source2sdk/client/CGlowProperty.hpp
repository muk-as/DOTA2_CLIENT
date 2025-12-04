#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int32 m_iGlowType"
        // static metadata: MNetworkVarNames "int32 m_iGlowTeam"
        // static metadata: MNetworkVarNames "int32 m_nGlowRange"
        // static metadata: MNetworkVarNames "int32 m_nGlowRangeMin"
        // static metadata: MNetworkVarNames "Color m_glowColorOverride"
        // static metadata: MNetworkVarNames "bool m_bFlashing"
        // static metadata: MNetworkVarNames "float m_flGlowTime"
        // static metadata: MNetworkVarNames "float m_flGlowStartTime"
        #pragma pack(push, 1)
        class CGlowProperty
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            Vector m_fGlowColor; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnGlowTypeChanged"
            std::int32_t m_iGlowType; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iGlowTeam; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nGlowRange; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nGlowRangeMin; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnGlowColorChanged"
            Color m_glowColorOverride; // 0x_            
            // metadata: MNetworkEnable
            bool m_bFlashing; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flGlowTime; // 0x_            
            // metadata: MNetworkEnable
            float m_flGlowStartTime; // 0x_            
            bool m_bGlowing; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CGlowProperty, m_fGlowColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlowProperty, m_iGlowType) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlowProperty, m_iGlowTeam) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlowProperty, m_nGlowRange) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlowProperty, m_nGlowRangeMin) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlowProperty, m_glowColorOverride) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlowProperty, m_bFlashing) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlowProperty, m_flGlowTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlowProperty, m_flGlowStartTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlowProperty, m_bGlowing) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CGlowProperty) == 0x_);
    };
};
