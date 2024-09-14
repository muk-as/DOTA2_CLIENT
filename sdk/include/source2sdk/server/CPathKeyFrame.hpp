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
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x510
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPathKeyFrame : public server::CLogicalEntity
    {
    public:
        Vector m_Origin; // 0x4b8        
        QAngle m_Angles; // 0x4c4        
        Quaternion m_qAngle; // 0x4d0        
        CUtlSymbolLarge m_iNextKey; // 0x4e0        
        float m_flNextTime; // 0x4e8        
        [[maybe_unused]] std::uint8_t pad_0x4ec[0x4]; // 0x4ec
        server::CPathKeyFrame* m_pNextKey; // 0x4f0        
        server::CPathKeyFrame* m_pPrevKey; // 0x4f8        
        float m_flMoveSpeed; // 0x500        
        [[maybe_unused]] std::uint8_t pad_0x504[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPathKeyFrame because it is not a standard-layout class
    static_assert(sizeof(CPathKeyFrame) == 0x510);
};
