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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSoundOpvarSetEntity : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszStackName; // 0x_            
            CUtlSymbolLarge m_iszOperatorName; // 0x_            
            CUtlSymbolLarge m_iszOpvarName; // 0x_            
            std::int32_t m_nOpvarType; // 0x_            
            std::int32_t m_nOpvarIndex; // 0x_            
            float m_flOpvarValue; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_OpvarValueString; // 0x_            
            bool m_bSetOnSpawn; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // uint64_t InputSetEventGuid; // 0x_
            // CUtlSymbolLarge InputSetStackName; // 0x_
            // CUtlSymbolLarge InputSetOperatorName; // 0x_
            // CUtlSymbolLarge InputSetOpvarName; // 0x_
            // int32_t InputSetOpvarIndex; // 0x_
            // void InputSetOpvar; // 0x_
            // float InputChangeOpvarValue; // 0x_
            // float InputChangeOpvarValueAndSet; // 0x_
            // void m_nGUID; // 0x_
            // void m_LastOpvarValueString; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundOpvarSetEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundOpvarSetEntity) == 0x_);
    };
};
