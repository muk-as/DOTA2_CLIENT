#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/Match3GameModeID_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CMatch3Level;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x70
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CMatch3GameModeDefinition
        {
        public:
            source2sdk::client::Match3GameModeID_t m_unGameModeID; // 0x0            
            uint8_t _pad0004[0xc]; // 0x4
            CUtlString m_sLocName; // 0x10            
            CUtlString m_sOpponentScene; // 0x18            
            CPanoramaImageName m_sBackgroundImage; // 0x20            
            std::int32_t m_nBoardRows; // 0x30            
            std::int32_t m_nBoardCols; // 0x34            
            float m_flPlayerHealth; // 0x38            
            uint8_t _pad003c[0x4]; // 0x3c
            // m_vecHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecHeroes;
            char m_vecHeroes[0x18]; // 0x40            
            // m_vecLevels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMatch3Level*> m_vecLevels;
            char m_vecLevels[0x18]; // 0x58            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMatch3GameModeDefinition, m_unGameModeID) == 0x0);
        static_assert(offsetof(source2sdk::client::CMatch3GameModeDefinition, m_sLocName) == 0x10);
        static_assert(offsetof(source2sdk::client::CMatch3GameModeDefinition, m_sOpponentScene) == 0x18);
        static_assert(offsetof(source2sdk::client::CMatch3GameModeDefinition, m_sBackgroundImage) == 0x20);
        static_assert(offsetof(source2sdk::client::CMatch3GameModeDefinition, m_nBoardRows) == 0x30);
        static_assert(offsetof(source2sdk::client::CMatch3GameModeDefinition, m_nBoardCols) == 0x34);
        static_assert(offsetof(source2sdk::client::CMatch3GameModeDefinition, m_flPlayerHealth) == 0x38);
        static_assert(offsetof(source2sdk::client::CMatch3GameModeDefinition, m_vecHeroes) == 0x40);
        static_assert(offsetof(source2sdk::client::CMatch3GameModeDefinition, m_vecLevels) == 0x58);
        
        static_assert(sizeof(source2sdk::client::CMatch3GameModeDefinition) == 0x70);
    };
};
