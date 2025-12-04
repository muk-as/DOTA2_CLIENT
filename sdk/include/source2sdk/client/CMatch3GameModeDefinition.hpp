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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CMatch3GameModeDefinition
        {
        public:
            source2sdk::client::Match3GameModeID_t m_unGameModeID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_sLocName; // 0x_            
            CUtlString m_sOpponentScene; // 0x_            
            CPanoramaImageName m_sBackgroundImage; // 0x_            
            std::int32_t m_nBoardRows; // 0x_            
            std::int32_t m_nBoardCols; // 0x_            
            float m_flPlayerHealth; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecHeroes;
            char m_vecHeroes[0x_]; // 0x_            
            // m_vecLevels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMatch3Level*> m_vecLevels;
            char m_vecLevels[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMatch3GameModeDefinition, m_unGameModeID) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3GameModeDefinition, m_sLocName) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3GameModeDefinition, m_sOpponentScene) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3GameModeDefinition, m_sBackgroundImage) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3GameModeDefinition, m_nBoardRows) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3GameModeDefinition, m_nBoardCols) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3GameModeDefinition, m_flPlayerHealth) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3GameModeDefinition, m_vecHeroes) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3GameModeDefinition, m_vecLevels) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CMatch3GameModeDefinition) == 0x_);
    };
};
