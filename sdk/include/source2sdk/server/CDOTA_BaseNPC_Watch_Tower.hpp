#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_BaseNPC_Building.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "string_t m_szOutpostName"
        // static metadata: MNetworkVarNames "string_t m_szInteractAbilityName"
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_Watch_Tower : public source2sdk::server::CDOTA_BaseNPC_Building
        {
        public:
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_szOutpostName; // 0x_            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_szInteractAbilityName; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_Watch_Tower because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Watch_Tower) == 0x_);
    };
};
