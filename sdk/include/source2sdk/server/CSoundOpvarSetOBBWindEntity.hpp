#pragma once
#include "source2sdk/server/CSoundOpvarSetPointBase.hpp"
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
    // Size: 0x590
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CSoundOpvarSetOBBWindEntity : public server::CSoundOpvarSetPointBase
    {
    public:
        Vector m_vMins; // 0x550        
        Vector m_vMaxs; // 0x55c        
        Vector m_vDistanceMins; // 0x568        
        Vector m_vDistanceMaxs; // 0x574        
        float m_flWindMin; // 0x580        
        float m_flWindMax; // 0x584        
        float m_flWindMapMin; // 0x588        
        float m_flWindMapMax; // 0x58c        
        
        // Datamap fields:
        // void CSoundOpvarSetOBBWindEntitySetOpvarThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSoundOpvarSetOBBWindEntity because it is not a standard-layout class
    static_assert(sizeof(CSoundOpvarSetOBBWindEntity) == 0x590);
};
