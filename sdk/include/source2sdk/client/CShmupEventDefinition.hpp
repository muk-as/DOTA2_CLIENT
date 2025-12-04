#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CShmupEventEnemySpawn.hpp"
#include "source2sdk/client/EShmupEventType.hpp"

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
        class CShmupEventDefinition
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::EShmupEventType m_type; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertySuppressExpr "m_type != k_eShmupEventType_SpawnEnemy"
            // m_vecEnemySpawns has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CShmupEventEnemySpawn> m_vecEnemySpawns;
            char m_vecEnemySpawns[0x_]; // 0x_            
            // metadata: MPropertySuppressExpr "m_type != k_eShmupEventType_SpawnEnemy"
            CUtlString m_strPathName; // 0x_            
            // metadata: MPropertySuppressExpr "m_type != k_eShmupEventType_UI"
            CUtlString m_strUIEvent; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CShmupEventDefinition, m_type) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupEventDefinition, m_vecEnemySpawns) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupEventDefinition, m_strPathName) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupEventDefinition, m_strUIEvent) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CShmupEventDefinition) == 0x_);
    };
};
