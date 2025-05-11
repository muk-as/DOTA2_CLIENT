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
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x538
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
            bool m_bDisabled; // 0x510            
            uint8_t _pad0511[0x7]; // 0x511
            bool m_bWasEnabled; // 0x518            
            uint8_t _pad0519[0x7]; // 0x519
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszSoundAreaType; // 0x520            
            // metadata: MNetworkEnable
            Vector m_vPos; // 0x528            
            uint8_t _pad0534[0x4];
            
            // Datamap fields:
            // void m_nGUID; // 0x514
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_SoundAreaEntityBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_SoundAreaEntityBase) == 0x538);
    };
};
