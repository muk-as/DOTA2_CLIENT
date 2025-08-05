#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_DOTAGameManager;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "CDOTAGameManager * m_pGameManager"
        #pragma pack(push, 1)
        class C_DOTAGameManagerProxy : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkTypeAlias "CDOTAGameManager*"
            source2sdk::client::C_DOTAGameManager* m_pGameManager; // 0x5e8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTAGameManagerProxy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTAGameManagerProxy) == 0x5f0);
    };
};
