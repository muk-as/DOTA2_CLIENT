#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x528
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CSoundOpvarSetEntity : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4e0[0x8]; // 0x4e0
        CUtlSymbolLarge m_iszStackName; // 0x4e8        
        CUtlSymbolLarge m_iszOperatorName; // 0x4f0        
        CUtlSymbolLarge m_iszOpvarName; // 0x4f8        
        int32_t m_nOpvarType; // 0x500        
        int32_t m_nOpvarIndex; // 0x504        
        float m_flOpvarValue; // 0x508        
        [[maybe_unused]] std::uint8_t pad_0x50c[0x4]; // 0x50c
        CUtlSymbolLarge m_OpvarValueString; // 0x510        
        bool m_bSetOnSpawn; // 0x518        
        [[maybe_unused]] std::uint8_t pad_0x519[0xf];
        
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
        // void m_LastOpvarValueString; // 0x520
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSoundOpvarSetEntity because it is not a standard-layout class
    static_assert(sizeof(CSoundOpvarSetEntity) == 0x528);
};
