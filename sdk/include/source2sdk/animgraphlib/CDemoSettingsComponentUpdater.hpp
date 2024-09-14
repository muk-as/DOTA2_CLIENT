#pragma once
#include "source2sdk/animgraphlib/CAnimComponentUpdater.hpp"
#include "source2sdk/animgraphlib/CAnimDemoCaptureSettings.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CDemoSettingsComponentUpdater : public animgraphlib::CAnimComponentUpdater
    {
    public:
        animgraphlib::CAnimDemoCaptureSettings m_settings; // 0x30        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDemoSettingsComponentUpdater because it is not a standard-layout class
    static_assert(sizeof(CDemoSettingsComponentUpdater) == 0xb0);
};
