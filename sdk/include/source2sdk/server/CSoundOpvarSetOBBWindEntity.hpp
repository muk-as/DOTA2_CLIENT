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
    // Size: 0x5b8
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CSoundOpvarSetOBBWindEntity : public server::CSoundOpvarSetPointBase
    {
    public:
        Vector m_vMins; // 0x578        
        Vector m_vMaxs; // 0x584        
        Vector m_vDistanceMins; // 0x590        
        Vector m_vDistanceMaxs; // 0x59c        
        float m_flWindMin; // 0x5a8        
        float m_flWindMax; // 0x5ac        
        float m_flWindMapMin; // 0x5b0        
        float m_flWindMapMax; // 0x5b4        
        
        // Datamap fields:
        // void CSoundOpvarSetOBBWindEntitySetOpvarThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSoundOpvarSetOBBWindEntity because it is not a standard-layout class
    static_assert(sizeof(CSoundOpvarSetOBBWindEntity) == 0x5b8);
};
