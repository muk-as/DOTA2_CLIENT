#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABehaviorCompanion.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorPoogie : public source2sdk::server::CDOTABehaviorCompanion
        {
        public:
            // m_hMyHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hMyHero;
            char m_hMyHero[0x_]; // 0x_            
            // m_hEffigy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEffigy;
            char m_hEffigy[0x_]; // 0x_            
            // m_hHighFiveAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hHighFiveAbility;
            char m_hHighFiveAbility[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bEnemiesNearBase; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iRightOffsetEffigy; // 0x_            
            std::int32_t m_iForwardOffsetEffigy; // 0x_            
            std::int32_t m_iRightOffsetHero; // 0x_            
            std::int32_t m_iForwardOffsetHero; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_PositionOffsetsTimer; // 0x_            
            source2sdk::server::CountdownTimer m_HighFiveTimer; // 0x_            
            source2sdk::server::CountdownTimer m_EmoteTimer; // 0x_            
            source2sdk::server::CountdownTimer m_VanishTimer; // 0x_            
            source2sdk::server::CountdownTimer m_GreetHeroTimer; // 0x_            
            source2sdk::server::CountdownTimer m_EnemiesNearBaseTimer; // 0x_            
            source2sdk::server::CountdownTimer m_FindEffigyTimer; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTABehaviorPoogie because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorPoogie) == 0x_);
    };
};
