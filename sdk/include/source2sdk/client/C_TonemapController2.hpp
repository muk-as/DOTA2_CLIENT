#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x560
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
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
    class C_TonemapController2 : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        float m_flAutoExposureMin; // 0x538        
        // metadata: MNetworkEnable
        float m_flAutoExposureMax; // 0x53c        
        // metadata: MNetworkEnable
        float m_flTonemapPercentTarget; // 0x540        
        // metadata: MNetworkEnable
        float m_flTonemapPercentBrightPixels; // 0x544        
        // metadata: MNetworkEnable
        float m_flTonemapMinAvgLum; // 0x548        
        // metadata: MNetworkEnable
        float m_flExposureAdaptationSpeedUp; // 0x54c        
        // metadata: MNetworkEnable
        float m_flExposureAdaptationSpeedDown; // 0x550        
        // metadata: MNetworkEnable
        float m_flTonemapEVSmoothingRange; // 0x554        
        [[maybe_unused]] std::uint8_t pad_0x558[0x8];
        
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
    static_assert(sizeof(C_TonemapController2) == 0x560);
};
