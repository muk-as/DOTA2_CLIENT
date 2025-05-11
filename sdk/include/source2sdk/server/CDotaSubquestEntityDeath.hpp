#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDotaSubquestBase.hpp"

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
        // Size: 0x748
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CDotaSubquestEntityDeath : public source2sdk::server::CDotaSubquestBase
        {
        public:
            // m_entityNameList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbolLarge> m_entityNameList;
            char m_entityNameList[0x18]; // 0x730            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDotaSubquestEntityDeath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDotaSubquestEntityDeath) == 0x748);
    };
};
