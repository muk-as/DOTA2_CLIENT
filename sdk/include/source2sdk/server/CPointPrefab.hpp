#pragma once
#include "source2sdk/server/CServerOnlyPointEntity.hpp"
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
    // Size: 0x520
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPointPrefab : public server::CServerOnlyPointEntity
    {
    public:
        CUtlSymbolLarge m_targetMapName; // 0x4b8        
        CUtlSymbolLarge m_forceWorldGroupID; // 0x4c0        
        CUtlSymbolLarge m_associatedRelayTargetName; // 0x4c8        
        bool m_fixupNames; // 0x4d0        
        bool m_bLoadDynamic; // 0x4d1        
        [[maybe_unused]] std::uint8_t pad_0x4d2[0x2]; // 0x4d2
        // m_associatedRelayEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CPointPrefab> m_associatedRelayEntity;
        char m_associatedRelayEntity[0x4]; // 0x4d4        
        [[maybe_unused]] std::uint8_t pad_0x4d8[0x48];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointPrefab because it is not a standard-layout class
    static_assert(sizeof(CPointPrefab) == 0x520);
};
