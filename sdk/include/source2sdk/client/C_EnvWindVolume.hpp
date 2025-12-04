#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "Vector m_vBoxMins"
        // static metadata: MNetworkVarNames "Vector m_vBoxMaxs"
        // static metadata: MNetworkVarNames "bool m_bStartDisabled"
        // static metadata: MNetworkVarNames "int m_nShape"
        // static metadata: MNetworkVarNames "float m_fWindSpeedMultiplier"
        // static metadata: MNetworkVarNames "float m_fWindTurbulenceMultiplier"
        // static metadata: MNetworkVarNames "float m_fWindSpeedVariationMultiplier"
        // static metadata: MNetworkVarNames "float m_fWindDirectionVariationMultiplier"
        #pragma pack(push, 1)
        class C_EnvWindVolume : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bActive; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            Vector m_vBoxMins; // 0x_            
            // metadata: MNetworkEnable
            Vector m_vBoxMaxs; // 0x_            
            // metadata: MNetworkEnable
            bool m_bStartDisabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_nShape; // 0x_            
            // metadata: MNetworkEnable
            float m_fWindSpeedMultiplier; // 0x_            
            // metadata: MNetworkEnable
            float m_fWindTurbulenceMultiplier; // 0x_            
            // metadata: MNetworkEnable
            float m_fWindSpeedVariationMultiplier; // 0x_            
            // metadata: MNetworkEnable
            float m_fWindDirectionVariationMultiplier; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // bool InputEnable; // 0x_
            // bool InputDisable; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvWindVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvWindVolume) == 0x_);
    };
};
