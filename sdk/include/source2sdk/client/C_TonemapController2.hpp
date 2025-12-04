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
        // static metadata: MNetworkVarNames "float m_flAutoExposureMin"
        // static metadata: MNetworkVarNames "float m_flAutoExposureMax"
        // static metadata: MNetworkVarNames "float m_flExposureAdaptationSpeedUp"
        // static metadata: MNetworkVarNames "float m_flExposureAdaptationSpeedDown"
        // static metadata: MNetworkVarNames "float m_flTonemapEVSmoothingRange"
        #pragma pack(push, 1)
        class C_TonemapController2 : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_flAutoExposureMin; // 0x_            
            // metadata: MNetworkEnable
            float m_flAutoExposureMax; // 0x_            
            // metadata: MNetworkEnable
            float m_flExposureAdaptationSpeedUp; // 0x_            
            // metadata: MNetworkEnable
            float m_flExposureAdaptationSpeedDown; // 0x_            
            // metadata: MNetworkEnable
            float m_flTonemapEVSmoothingRange; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputEnable; // 0x_
            // void InputDisable; // 0x_
            // float InputSetMinExposure; // 0x_
            // float InputSetMaxExposure; // 0x_
            // float InputSetExposureAdaptationSpeedUp; // 0x_
            // float InputSetExposureAdaptationSpeedDown; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_TonemapController2 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_TonemapController2) == 0x_);
    };
};
