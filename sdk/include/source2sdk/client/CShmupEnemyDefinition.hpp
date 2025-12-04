#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CShmupBulletInfo.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CShmupEnemyDefinition
        {
        public:
            CUtlString m_strNameInMap; // 0x_            
            std::int32_t m_nHealth; // 0x_            
            float m_flHitboxRadius; // 0x_            
            Vector m_vHitboxOffsetWS; // 0x_            
            std::int32_t m_nKillScore; // 0x_            
            float m_flModelScale; // 0x_            
            bool m_bIsBoss; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertySuppressExpr "m_type != k_eShmupPathEventType_Shoot"
            // m_vecBulletPatterns has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CShmupBulletInfo> m_vecBulletPatterns;
            char m_vecBulletPatterns[0x_]; // 0x_            
            // m_vecOnDeathBulletPatterns has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CShmupBulletInfo> m_vecOnDeathBulletPatterns;
            char m_vecOnDeathBulletPatterns[0x_]; // 0x_            
            // m_vecSelfDestroyBulletPatterns has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CShmupBulletInfo> m_vecSelfDestroyBulletPatterns;
            char m_vecSelfDestroyBulletPatterns[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CShmupEnemyDefinition, m_strNameInMap) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupEnemyDefinition, m_nHealth) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupEnemyDefinition, m_flHitboxRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupEnemyDefinition, m_vHitboxOffsetWS) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupEnemyDefinition, m_nKillScore) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupEnemyDefinition, m_flModelScale) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupEnemyDefinition, m_bIsBoss) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupEnemyDefinition, m_vecBulletPatterns) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupEnemyDefinition, m_vecOnDeathBulletPatterns) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupEnemyDefinition, m_vecSelfDestroyBulletPatterns) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CShmupEnemyDefinition) == 0x_);
    };
};
