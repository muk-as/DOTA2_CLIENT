#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CServerOnlyPointEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x548
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPointPrefab : public source2sdk::server::CServerOnlyPointEntity
        {
        public:
            CUtlSymbolLarge m_targetMapName; // 0x4e0            
            CUtlSymbolLarge m_forceWorldGroupID; // 0x4e8            
            CUtlSymbolLarge m_associatedRelayTargetName; // 0x4f0            
            bool m_fixupNames; // 0x4f8            
            bool m_bLoadDynamic; // 0x4f9            
            uint8_t _pad04fa[0x2]; // 0x4fa
            // m_associatedRelayEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPointPrefab> m_associatedRelayEntity;
            char m_associatedRelayEntity[0x4]; // 0x4fc            
            uint8_t _pad0500[0x48];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointPrefab because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointPrefab) == 0x548);
    };
};
