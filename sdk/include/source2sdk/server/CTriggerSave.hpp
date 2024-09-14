#pragma once
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x968
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CTriggerSave : public server::CBaseTrigger
    {
    public:
        bool m_bForceNewLevelUnit; // 0x958        
        [[maybe_unused]] std::uint8_t pad_0x959[0x3]; // 0x959
        float m_fDangerousTimer; // 0x95c        
        int32_t m_minHitPoints; // 0x960        
        [[maybe_unused]] std::uint8_t pad_0x964[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerSave because it is not a standard-layout class
    static_assert(sizeof(CTriggerSave) == 0x968);
};
