#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x528
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CPhysicsSpring : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4e0[0x8]; // 0x4e0
        float m_flFrequency; // 0x4e8        
        float m_flDampingRatio; // 0x4ec        
        float m_flRestLength; // 0x4f0        
        [[maybe_unused]] std::uint8_t pad_0x4f4[0x4]; // 0x4f4
        CUtlSymbolLarge m_nameAttachStart; // 0x4f8        
        CUtlSymbolLarge m_nameAttachEnd; // 0x500        
        Vector m_start; // 0x508        
        Vector m_end; // 0x514        
        uint32_t m_teleportTick; // 0x520        
        [[maybe_unused]] std::uint8_t pad_0x524[0x4];
        
        // Datamap fields:
        // void m_pSpringJoint; // 0x4e0
        // float InputSetFrequency; // 0x0
        // float InputSetDampingRatio; // 0x0
        // float InputSetRestLength; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysicsSpring because it is not a standard-layout class
    static_assert(sizeof(CPhysicsSpring) == 0x528);
};
