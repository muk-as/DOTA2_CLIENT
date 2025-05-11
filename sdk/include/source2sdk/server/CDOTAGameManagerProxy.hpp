#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTAGameManager;
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
        // static metadata: MNetworkVarNames "CDOTAGameManager * m_pGameManager"
        #pragma pack(push, 1)
        class CDOTAGameManagerProxy : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkTypeAlias "CDOTAGameManager*"
            source2sdk::server::CDOTAGameManager* m_pGameManager; // 0x4d8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAGameManagerProxy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTAGameManagerProxy) == 0x4e0);
    };
};
