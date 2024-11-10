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
    // Size: 0x588
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "CUtlString m_pathString"
    #pragma pack(push, 1)
    class CPathSimple : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4e0[0x58]; // 0x4e0
        // metadata: MNetworkEnable
        CUtlString m_pathString; // 0x538        
        // m_vecPathSamplePositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_vecPathSamplePositions;
        char m_vecPathSamplePositions[0x18]; // 0x540        
        // m_vecPathSampleParameters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_vecPathSampleParameters;
        char m_vecPathSampleParameters[0x18]; // 0x558        
        // m_vecPathSampleDistances has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_vecPathSampleDistances;
        char m_vecPathSampleDistances[0x18]; // 0x570        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPathSimple because it is not a standard-layout class
    static_assert(sizeof(CPathSimple) == 0x588);
};
