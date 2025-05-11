#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTASpectatorGraphManager;
    };
};

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
        // Size: 0x4e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "CDOTASpectatorGraphManager * m_pGraphManager"
        #pragma pack(push, 1)
        class CDOTASpectatorGraphManagerProxy : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkTypeAlias "CDOTASpectatorGraphManager*"
            source2sdk::server::CDOTASpectatorGraphManager* m_pGraphManager; // 0x4d8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTASpectatorGraphManagerProxy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTASpectatorGraphManagerProxy) == 0x4e0);
    };
};
