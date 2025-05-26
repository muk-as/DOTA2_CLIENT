#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_GameRulesProxy.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_DOTAGamerules;
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
        // Size: 0x5e8
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "C_DOTAGamerules * m_pGameRules"
        #pragma pack(push, 1)
        class C_DOTAGamerulesProxy : public source2sdk::client::C_GameRulesProxy
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkTypeAlias "CDOTAGameRules*"
            // metadata: MNetworkPriority "32"
            source2sdk::client::C_DOTAGamerules* m_pGameRules; // 0x5e0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTAGamerulesProxy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTAGamerulesProxy) == 0x5e8);
    };
};
