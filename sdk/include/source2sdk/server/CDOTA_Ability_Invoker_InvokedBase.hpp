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
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            std::int32_t m_nQuasLevel; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nWexLevel; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nExortLevel; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Invoker_InvokedBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Invoker_InvokedBase) == 0x_);
    };
};
