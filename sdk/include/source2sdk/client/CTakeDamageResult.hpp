#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace client
    {
        struct CTakeDamageInfo;
    };
};

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
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CTakeDamageResult
        {
        public:
            // metadata: MNotSaved
            source2sdk::client::CTakeDamageInfo* m_pOriginatingInfo; // 0x_            
            std::int32_t m_nHealthLost; // 0x_            
            std::int32_t m_nHealthBefore; // 0x_            
            std::int32_t m_nDamageDealt; // 0x_            
            float m_flPreModifiedDamage; // 0x_            
            std::int32_t m_nTotalledHealthLost; // 0x_            
            std::int32_t m_nTotalledDamageDealt; // 0x_            
            float m_flTotalledPreModifiedDamage; // 0x_            
            bool m_bWasDamageSuppressed; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_pOriginatingInfo) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_nHealthLost) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_nHealthBefore) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_nDamageDealt) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_flPreModifiedDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_nTotalledHealthLost) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_nTotalledDamageDealt) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_flTotalledPreModifiedDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_bWasDamageSuppressed) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CTakeDamageResult) == 0x_);
    };
};
