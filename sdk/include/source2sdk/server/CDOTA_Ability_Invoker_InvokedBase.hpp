#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5c8
        // Has VTable
        // Is Abstract
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_nQuasLevel"
        // static metadata: MNetworkVarNames "int m_nWexLevel"
        // static metadata: MNetworkVarNames "int m_nExortLevel"
        #pragma pack(push, 1)
        class CDOTA_Ability_Invoker_InvokedBase : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nQuasLevel; // 0x5b8            
            // metadata: MNetworkEnable
            std::int32_t m_nWexLevel; // 0x5bc            
            // metadata: MNetworkEnable
            std::int32_t m_nExortLevel; // 0x5c0            
            uint8_t _pad05c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Invoker_InvokedBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Invoker_InvokedBase) == 0x5c8);
    };
};
