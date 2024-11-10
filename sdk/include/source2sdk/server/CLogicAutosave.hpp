#pragma once
#include "source2sdk/server/CLogicalEntity.hpp"
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
    // Size: 0x4f0
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CLogicAutosave : public server::CLogicalEntity
    {
    public:
        bool m_bForceNewLevelUnit; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e1[0x3]; // 0x4e1
        int32_t m_minHitPoints; // 0x4e4        
        int32_t m_minHitPointsToCommit; // 0x4e8        
        [[maybe_unused]] std::uint8_t pad_0x4ec[0x4];
        
        // Datamap fields:
        // void InputSave; // 0x0
        // float InputSaveDangerous; // 0x0
        // int32_t InputSetMinHitpointsThreshold; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicAutosave because it is not a standard-layout class
    static_assert(sizeof(CLogicAutosave) == 0x4f0);
};
