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
        // Size: 0x538
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSoundOpvarSetEntity : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04e0[0x18]; // 0x4e0
            CUtlSymbolLarge m_iszStackName; // 0x4f8            
            CUtlSymbolLarge m_iszOperatorName; // 0x500            
            CUtlSymbolLarge m_iszOpvarName; // 0x508            
            std::int32_t m_nOpvarType; // 0x510            
            std::int32_t m_nOpvarIndex; // 0x514            
            float m_flOpvarValue; // 0x518            
            uint8_t _pad051c[0x4]; // 0x51c
            CUtlSymbolLarge m_OpvarValueString; // 0x520            
            bool m_bSetOnSpawn; // 0x528            
            uint8_t _pad0529[0xf];
            
            // Datamap fields:
            // uint64_t InputSetEventGuid; // 0x0
            // CUtlSymbolLarge InputSetStackName; // 0x0
            // CUtlSymbolLarge InputSetOperatorName; // 0x0
            // CUtlSymbolLarge InputSetOpvarName; // 0x0
            // int32_t InputSetOpvarIndex; // 0x0
            // void InputSetOpvar; // 0x0
            // float InputChangeOpvarValue; // 0x0
            // float InputChangeOpvarValueAndSet; // 0x0
            // void m_nGUID; // 0x4e0
            // void m_LastOpvarValueString; // 0x530
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundOpvarSetEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundOpvarSetEntity) == 0x538);
    };
};
