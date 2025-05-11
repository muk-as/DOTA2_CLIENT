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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x570
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "string_t m_iszStackName"
        // static metadata: MNetworkVarNames "string_t m_iszOperatorName"
        // static metadata: MNetworkVarNames "string_t m_iszOpvarName"
        // static metadata: MNetworkVarNames "int m_iOpvarIndex"
        // static metadata: MNetworkVarNames "bool m_bUseAutoCompare"
        #pragma pack(push, 1)
        class CSoundOpvarSetPointBase : public source2sdk::server::CBaseEntity
        {
        public:
            bool m_bDisabled; // 0x4d8            
            uint8_t _pad04d9[0x3]; // 0x4d9
            CEntityHandle m_hSource; // 0x4dc            
            uint8_t _pad04e0[0x8]; // 0x4e0
            CUtlSymbolLarge m_iszSourceEntityName; // 0x4e8            
            uint8_t _pad04f0[0x50]; // 0x4f0
            Vector m_vLastPosition; // 0x540            
            uint8_t _pad054c[0x4]; // 0x54c
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszStackName; // 0x550            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszOperatorName; // 0x558            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszOpvarName; // 0x560            
            // metadata: MNetworkEnable
            std::int32_t m_iOpvarIndex; // 0x568            
            // metadata: MNetworkEnable
            bool m_bUseAutoCompare; // 0x56c            
            uint8_t _pad056d[0x3];
            
            // Datamap fields:
            // uint64_t InputSetEventGuid; // 0x0
            // CUtlSymbolLarge InputSetStackName; // 0x0
            // CUtlSymbolLarge InputSetOperatorName; // 0x0
            // CUtlSymbolLarge InputSetOpvarName; // 0x0
            // CUtlSymbolLarge InputSetOpvarIndex; // 0x0
            // CUtlSymbolLarge InputSetSourceEntity; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void CSoundOpvarSetPointBaseSetOpvarThink; // 0x0
            // void m_nGUID; // 0x4e0
            // void m_hOpvarData; // 0x4f0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundOpvarSetPointBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundOpvarSetPointBase) == 0x570);
    };
};
