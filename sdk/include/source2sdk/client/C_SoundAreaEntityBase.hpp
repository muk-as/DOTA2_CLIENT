#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Is Abstract
        // 
        // static metadata: MNetworkVarNames "bool m_bDisabled"
        // static metadata: MNetworkVarNames "string_t m_iszSoundAreaType"
        // static metadata: MNetworkVarNames "Vector m_vPos"
        #pragma pack(push, 1)
        class C_SoundAreaEntityBase : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bDisabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bWasEnabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszSoundAreaType; // 0x_            
            // metadata: MNetworkEnable
            Vector m_vPos; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void m_nGUID; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_SoundAreaEntityBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_SoundAreaEntityBase) == 0x_);
    };
};
