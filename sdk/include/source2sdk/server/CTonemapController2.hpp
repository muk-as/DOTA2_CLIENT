#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x500
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
        class CTonemapController2 : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_flAutoExposureMin; // 0x4d8            
            // metadata: MNetworkEnable
            float m_flAutoExposureMax; // 0x4dc            
            // metadata: MNetworkEnable
            float m_flTonemapPercentTarget; // 0x4e0            
            // metadata: MNetworkEnable
            float m_flTonemapPercentBrightPixels; // 0x4e4            
            // metadata: MNetworkEnable
            float m_flTonemapMinAvgLum; // 0x4e8            
            // metadata: MNetworkEnable
            float m_flExposureAdaptationSpeedUp; // 0x4ec            
            // metadata: MNetworkEnable
            float m_flExposureAdaptationSpeedDown; // 0x4f0            
            // metadata: MNetworkEnable
            float m_flTonemapEVSmoothingRange; // 0x4f4            
            uint8_t _pad04f8[0x8];
            
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
        
        // Cannot assert offsets of fields in CTonemapController2 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTonemapController2) == 0x500);
    };
};
