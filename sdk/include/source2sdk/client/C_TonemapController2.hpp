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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x538
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "float m_flAutoExposureMin"
        // static metadata: MNetworkVarNames "float m_flAutoExposureMax"
        // static metadata: MNetworkVarNames "float m_flTonemapPercentTarget"
        // static metadata: MNetworkVarNames "float m_flTonemapPercentBrightPixels"
        // static metadata: MNetworkVarNames "float m_flTonemapMinAvgLum"
        // static metadata: MNetworkVarNames "float m_flExposureAdaptationSpeedUp"
        // static metadata: MNetworkVarNames "float m_flExposureAdaptationSpeedDown"
        // static metadata: MNetworkVarNames "float m_flTonemapEVSmoothingRange"
        #pragma pack(push, 1)
        class C_TonemapController2 : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_flAutoExposureMin; // 0x510            
            // metadata: MNetworkEnable
            float m_flAutoExposureMax; // 0x514            
            // metadata: MNetworkEnable
            float m_flTonemapPercentTarget; // 0x518            
            // metadata: MNetworkEnable
            float m_flTonemapPercentBrightPixels; // 0x51c            
            // metadata: MNetworkEnable
            float m_flTonemapMinAvgLum; // 0x520            
            // metadata: MNetworkEnable
            float m_flExposureAdaptationSpeedUp; // 0x524            
            // metadata: MNetworkEnable
            float m_flExposureAdaptationSpeedDown; // 0x528            
            // metadata: MNetworkEnable
            float m_flTonemapEVSmoothingRange; // 0x52c            
            uint8_t _pad0530[0x8];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // float InputSetMinExposure; // 0x0
            // float InputSetMaxExposure; // 0x0
            // float InputSetPercentTarget; // 0x0
            // float InputSetPercentBrightPixels; // 0x0
            // float InputSetMinAverageLuminosity; // 0x0
            // float InputSetExposureAdaptationSpeedUp; // 0x0
            // float InputSetExposureAdaptationSpeedDown; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_TonemapController2 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_TonemapController2) == 0x538);
    };
};
