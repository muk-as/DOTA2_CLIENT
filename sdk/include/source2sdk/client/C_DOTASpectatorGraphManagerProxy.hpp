#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_DOTASpectatorGraphManager;
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "C_DOTASpectatorGraphManager * m_pGraphManager"
        #pragma pack(push, 1)
        class C_DOTASpectatorGraphManagerProxy : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkTypeAlias "CDOTASpectatorGraphManager*"
            source2sdk::client::C_DOTASpectatorGraphManager* m_pGraphManager; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTASpectatorGraphManagerProxy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTASpectatorGraphManagerProxy) == 0x_);
    };
};
