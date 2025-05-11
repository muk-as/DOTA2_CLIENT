#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x4f8
        // Has VTable
        // Construct disallowed
        // MConstructibleClassBase
        // 
        // static metadata: MNetworkVarNames "bool m_bDisabled"
        // static metadata: MNetworkVarNames "string_t m_iszSoundAreaType"
        // static metadata: MNetworkVarNames "Vector m_vPos"
        #pragma pack(push, 1)
        class CSoundAreaEntityBase : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bDisabled; // 0x4d8            
            uint8_t _pad04d9[0x7]; // 0x4d9
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszSoundAreaType; // 0x4e0            
            // metadata: MNetworkEnable
            Vector m_vPos; // 0x4e8            
            uint8_t _pad04f4[0x4];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundAreaEntityBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundAreaEntityBase) == 0x4f8);
    };
};
